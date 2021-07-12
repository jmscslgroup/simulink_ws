#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "trajectory_07_05_2021_real";

// For Block trajectory_07_05_2021_real/Subscribe
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist> Sub_trajectory_07_05_2021_real_13;

// For Block trajectory_07_05_2021_real/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist> Sub_trajectory_07_05_2021_real_173;

// For Block trajectory_07_05_2021_real/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_trajectory_07_05_2021_real_std_msgs_Float64> Sub_trajectory_07_05_2021_real_180;

// For Block trajectory_07_05_2021_real/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_trajectory_07_05_2021_real_std_msgs_Float64> Pub_trajectory_07_05_2021_real_19;

// For Block trajectory_07_05_2021_real/Publish1
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist> Pub_trajectory_07_05_2021_real_167;

// For Block trajectory_07_05_2021_real/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_trajectory_07_05_2021_real_28;

// For Block trajectory_07_05_2021_real/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_trajectory_07_05_2021_real_29;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

