#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block trajectory_07_05_2021_real/Subscribe
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist> Sub_trajectory_07_05_2021_real_13;

// For Block trajectory_07_05_2021_real/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist> Sub_trajectory_07_05_2021_real_173;

// For Block trajectory_07_05_2021_real/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_trajectory_07_05_2021_real_std_msgs_Float64> Sub_trajectory_07_05_2021_real_180;

// For Block trajectory_07_05_2021_real/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_trajectory_07_05_2021_real_std_msgs_Float64> Pub_trajectory_07_05_2021_real_19;

// For Block trajectory_07_05_2021_real/Publish1
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_trajectory_07_05_2021_real_geometry_msgs_Twist> Pub_trajectory_07_05_2021_real_167;

// For Block trajectory_07_05_2021_real/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_trajectory_07_05_2021_real_28;

// For Block trajectory_07_05_2021_real/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_trajectory_07_05_2021_real_29;

void slros_node_init(int argc, char** argv);

#endif
