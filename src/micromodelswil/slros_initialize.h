#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_time.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block micromodelswil/Headway Calculation/Subscribe3
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_micromodelswil_std_msgs_Float64> Sub_micromodelswil_42;

// For Block micromodelswil/Headway Calculation/Subscribe4
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_micromodelswil_std_msgs_Float64> Sub_micromodelswil_43;

// For Block micromodelswil/Subscribe2
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Sub_micromodelswil_51;

// For Block micromodelswil/Subscribe3
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Sub_micromodelswil_15;

// For Block micromodelswil/Headway Calculation/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_micromodelswil_std_msgs_Float64> Pub_micromodelswil_40;

// For Block micromodelswil/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Pub_micromodelswil_29;

// For Block micromodelswil/Publish1
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Pub_micromodelswil_67;

// For Block micromodelswil/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_micromodelswil_geometry_msgs_Twist> Pub_micromodelswil_71;

// For Block micromodelswil/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_55;

// For Block micromodelswil/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_56;

// For Block micromodelswil/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_57;

// For Block micromodelswil/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_58;

// For Block micromodelswil/Headway Calculation/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_micromodelswil_39;

void slros_node_init(int argc, char** argv);

#endif
