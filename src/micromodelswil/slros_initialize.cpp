#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "micromodelswil";

// For Block micromodelswil/Headway Calculation/Subscribe3
SimulinkSubscriber<std_msgs::Float64, SL_Bus_micromodelswil_std_msgs_Float64> Sub_micromodelswil_42;

// For Block micromodelswil/Headway Calculation/Subscribe4
SimulinkSubscriber<std_msgs::Float64, SL_Bus_micromodelswil_std_msgs_Float64> Sub_micromodelswil_43;

// For Block micromodelswil/Subscribe2
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Sub_micromodelswil_51;

// For Block micromodelswil/Subscribe3
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Sub_micromodelswil_15;

// For Block micromodelswil/Headway Calculation/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_micromodelswil_std_msgs_Float64> Pub_micromodelswil_40;

// For Block micromodelswil/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Pub_micromodelswil_29;

// For Block micromodelswil/Publish1
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Pub_micromodelswil_67;

// For Block micromodelswil/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Pub_micromodelswil_71;

// For Block micromodelswil/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_55;

// For Block micromodelswil/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_56;

// For Block micromodelswil/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_57;

// For Block micromodelswil/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_58;

// For Block micromodelswil/Headway Calculation/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_39;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

