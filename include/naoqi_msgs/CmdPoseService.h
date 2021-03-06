// Generated by gencpp from file naoqi_msgs/CmdPoseService.msg
// DO NOT EDIT!


#ifndef NAOQI_MSGS_MESSAGE_CMDPOSESERVICE_H
#define NAOQI_MSGS_MESSAGE_CMDPOSESERVICE_H

#include <ros/service_traits.h>


#include <naoqi_msgs/CmdPoseServiceRequest.h>
#include <naoqi_msgs/CmdPoseServiceResponse.h>


namespace naoqi_msgs
{

struct CmdPoseService
{

typedef CmdPoseServiceRequest Request;
typedef CmdPoseServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CmdPoseService
} // namespace naoqi_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::naoqi_msgs::CmdPoseService > {
  static const char* value()
  {
    return "271cb12677c4cd9bccbc642cd9258d1f";
  }

  static const char* value(const ::naoqi_msgs::CmdPoseService&) { return value(); }
};

template<>
struct DataType< ::naoqi_msgs::CmdPoseService > {
  static const char* value()
  {
    return "naoqi_msgs/CmdPoseService";
  }

  static const char* value(const ::naoqi_msgs::CmdPoseService&) { return value(); }
};


// service_traits::MD5Sum< ::naoqi_msgs::CmdPoseServiceRequest> should match 
// service_traits::MD5Sum< ::naoqi_msgs::CmdPoseService > 
template<>
struct MD5Sum< ::naoqi_msgs::CmdPoseServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::naoqi_msgs::CmdPoseService >::value();
  }
  static const char* value(const ::naoqi_msgs::CmdPoseServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::naoqi_msgs::CmdPoseServiceRequest> should match 
// service_traits::DataType< ::naoqi_msgs::CmdPoseService > 
template<>
struct DataType< ::naoqi_msgs::CmdPoseServiceRequest>
{
  static const char* value()
  {
    return DataType< ::naoqi_msgs::CmdPoseService >::value();
  }
  static const char* value(const ::naoqi_msgs::CmdPoseServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::naoqi_msgs::CmdPoseServiceResponse> should match 
// service_traits::MD5Sum< ::naoqi_msgs::CmdPoseService > 
template<>
struct MD5Sum< ::naoqi_msgs::CmdPoseServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::naoqi_msgs::CmdPoseService >::value();
  }
  static const char* value(const ::naoqi_msgs::CmdPoseServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::naoqi_msgs::CmdPoseServiceResponse> should match 
// service_traits::DataType< ::naoqi_msgs::CmdPoseService > 
template<>
struct DataType< ::naoqi_msgs::CmdPoseServiceResponse>
{
  static const char* value()
  {
    return DataType< ::naoqi_msgs::CmdPoseService >::value();
  }
  static const char* value(const ::naoqi_msgs::CmdPoseServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NAOQI_MSGS_MESSAGE_CMDPOSESERVICE_H
