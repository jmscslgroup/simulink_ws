#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block flow_model_Nathan_05_21_2021/Headway Calculation/Subscribe3
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64> Sub_flow_model_Nathan_05_21_2021_50;

// For Block flow_model_Nathan_05_21_2021/Headway Calculation/Subscribe4
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64> Sub_flow_model_Nathan_05_21_2021_53;

// For Block flow_model_Nathan_05_21_2021/Subscribe
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist> Sub_flow_model_Nathan_05_21_2021_13;

// For Block flow_model_Nathan_05_21_2021/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist> Sub_flow_model_Nathan_05_21_2021_151;

// For Block flow_model_Nathan_05_21_2021/Subscribe2
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist> Sub_flow_model_Nathan_05_21_2021_26;

// For Block flow_model_Nathan_05_21_2021/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist> Pub_flow_model_Nathan_05_21_2021_19;

// For Block flow_model_Nathan_05_21_2021/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64> Pub_flow_model_Nathan_05_21_2021_44;

// For Block flow_model_Nathan_05_21_2021/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_flow_model_Nathan_05_21_2021_28;

// For Block flow_model_Nathan_05_21_2021/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_flow_model_Nathan_05_21_2021_29;

// For Block flow_model_Nathan_05_21_2021/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_flow_model_Nathan_05_21_2021_154;

// For Block flow_model_Nathan_05_21_2021/Headway Calculation/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_flow_model_Nathan_05_21_2021_55;

void slros_node_init(int argc, char** argv);

#endif
