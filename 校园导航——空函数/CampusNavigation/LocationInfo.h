//
// Created by 刘凯源 on 24-10-13.
//

#ifndef CAMPUSNAVIGATION_LOCATIONINFO_H
#define CAMPUSNAVIGATION_LOCATIONINFO_H

#include<string>
#include<iostream>
#include <utility>

namespace Graph {
    struct LocationInfo {
        std::string name;         // 地点名称
        int visitTime{0};       // 建议参观用时（单位：分钟）
        std::string type;   // 地点类型
        LocationInfo() = default;
        LocationInfo(std::string name_, const int visitTime_, std::string type_) :
                name(std::move(name_)), visitTime(visitTime_), type(std::move(type_)) {};
    };
} // Graph

#endif //CAMPUSNAVIGATION_LOCATIONINFO_H
