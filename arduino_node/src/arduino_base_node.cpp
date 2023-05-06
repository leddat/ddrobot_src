#include "arduino_base.h"

int main(int argc, char** argv )
{
    ros::init(argc, argv, "arduino_base_node");
    TwistToOdom tw2od;
    ros::spin();
    return 0;
}