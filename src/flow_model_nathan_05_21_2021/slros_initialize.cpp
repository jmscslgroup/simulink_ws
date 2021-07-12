#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "flow_model_Nathan_05_21_2021";

// For Block flow_model_Nathan_05_21_2021/Headway Calculation/Subscribe3
SimulinkSubscriber<std_msgs::Float64, SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64> Sub_flow_model_Nathan_05_21_2021_50;

// For Block flow_model_Nathan_05_21_2021/Headway Calculation/Subscribe4
SimulinkSubscriber<std_msgs::Float64, SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64> Sub_flow_model_Nathan_05_21_2021_53;

// For Block flow_model_Nathan_05_21_2021/Subscribe
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist> Sub_flow_model_Nathan_05_21_2021_13;

// For Block flow_model_Nathan_05_21_2021/Subscribe1
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist> Sub_flow_model_Nathan_05_21_2021_151;

// For Block flow_model_Nathan_05_21_2021/Subscribe2
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist> Sub_flow_model_Nathan_05_21_2021_26;

// For Block flow_model_Nathan_05_21_2021/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_flow_model_Nathan_05_21_2021_geometry_msgs_Twist> Pub_flow_model_Nathan_05_21_2021_19;

// For Block flow_model_Nathan_05_21_2021/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_flow_model_Nathan_05_21_2021_std_msgs_Float64> Pub_flow_model_Nathan_05_21_2021_44;

// For Block flow_model_Nathan_05_21_2021/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_flow_model_Nathan_05_21_2021_28;

// For Block flow_model_Nathan_05_21_2021/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_flow_model_Nathan_05_21_2021_29;

// For Block flow_model_Nathan_05_21_2021/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_flow_model_Nathan_05_21_2021_154;

// For Block flow_model_Nathan_05_21_2021/Headway Calculation/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_flow_model_Nathan_05_21_2021_55;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

