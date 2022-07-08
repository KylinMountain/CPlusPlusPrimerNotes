//
// Created by kylin on 2022/7/5.
//
#ifndef SALES_ITEM_H_
#define SALES_ITEM_H_

#include <iostream>
#include <String>

/// Start class
class Sales_item
{
public:
    Sales_item():units_sold(0),revenue(0.0){}
    Sales_item(const std::string &book):isbn(book),units_sold(0),revenue(0.0){}
    Sales_item(std::istream & in){in >> *this;}
    virtual ~Sales_item(){}
    double avg_price() const;
    bool same_isbn(const Sales_item &)const;

    Sales_item & operator+=(const Sales_item &);
    friend std::istream & operator>>(std::istream &,Sales_item &);
    friend std::ostream & operator<<(std::ostream &,const Sales_item &);

    // 二元运算符重载的成员函数只能有一个参数，所以不能放此处

    // Sales_item operator+(const Sales_item &,const Sales_item &);
    // bool operator==(const Sales_item &,const Sales_item &);
    // bool operator!=(const Sales_item &,const Sales_item &);

    std::string isbn;
    unsigned units_sold;
    double revenue;
};
/// End class

Sales_item operator+(const Sales_item &,const Sales_item &);

/// Class function
inline Sales_item & Sales_item::operator+=(const Sales_item & rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
inline Sales_item operator+(const Sales_item & lhs,const Sales_item & rhs)
{
    Sales_item ret(lhs);
    ret += rhs;
    return ret;
}
inline bool operator==(const Sales_item & lhs,const Sales_item & rhs)
{
    return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.same_isbn(rhs);
}
inline bool operator!=(const Sales_item & lhs,const Sales_item & rhs)
{
    return !(lhs == rhs);
}
inline std::istream & operator>>(std::istream &in,Sales_item &s)
{
    double price;
    in >> s.isbn >> s.units_sold >>price;
    if(in)
        s.revenue = s.units_sold * price;
    else
        s = Sales_item();
    return in;
}
inline std::ostream & operator<<(std::ostream &out,const Sales_item &s)
{
    out << s.isbn << " " << s.units_sold << " " << s.revenue << " " << s.avg_price();
    return out;
}
inline double Sales_item::avg_price() const
{
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;
}
inline bool Sales_item::same_isbn(const Sales_item &rhs)const
{
    return isbn == rhs.isbn;
}
/// End class function
#endif