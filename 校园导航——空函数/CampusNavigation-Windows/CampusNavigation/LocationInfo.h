//
// Created by 刘凯源 on 24-10-13.
//

#ifndef CAMPUSNAVIGATION_LOCATIONINFO_H
#define CAMPUSNAVIGATION_LOCATIONINFO_H

#include <string>
#include <iostream>

// 假设在 LocationInfo.h 中定义
struct VertInfo {
    std::string name;       // 地点名称
    int         visitTime;  // 推荐参观时间（分钟）
    std::string category;   // 地点类别
};


namespace Graph {
    struct LocationInfo {
        std::string name;         // 地点名称
        int visitTime;       // 建议参观用时（单位：分钟）
        std::string type;   // 地点类型
        LocationInfo() = default;
        LocationInfo(const std::string& name_, const int visitTime_, const std::string& type_)
            : name(name_), visitTime(visitTime_), type(type_) {}
    };
} // Graph

#endif //CAMPUSNAVIGATION_LOCATIONINFO_H
