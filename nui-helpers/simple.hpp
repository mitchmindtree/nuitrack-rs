#pragma once
#include <nuitrack/Nuitrack.h>
namespace simple {
    struct Skeleton{
        int id;
        size_t num_joints;
        const tdv::nuitrack::Joint * joints;
    };
    struct SkeletonData {
        Skeleton * skeletons; 
        size_t len;
    };
    struct DepthFrame {
        int rows;
        int cols;
        uint64_t id;
        const uint16_t * data;
        uint64_t time_stamp;
    };
    
    struct RGBFrame{
        int rows;
        int cols;
        uint64_t id;
        const tdv::nuitrack::Color3 * data;
        uint64_t time_stamp;
    };
};

