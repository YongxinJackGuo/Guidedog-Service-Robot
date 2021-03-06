// Generated by gencpp from file pedsim_srvs/SetAgentState.msg
// DO NOT EDIT!


#ifndef PEDSIM_SRVS_MESSAGE_SETAGENTSTATE_H
#define PEDSIM_SRVS_MESSAGE_SETAGENTSTATE_H

#include <ros/service_traits.h>


#include <pedsim_srvs/SetAgentStateRequest.h>
#include <pedsim_srvs/SetAgentStateResponse.h>


namespace pedsim_srvs
{

struct SetAgentState
{

typedef SetAgentStateRequest Request;
typedef SetAgentStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetAgentState
} // namespace pedsim_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pedsim_srvs::SetAgentState > {
  static const char* value()
  {
    return "5b4f1093c417037224eb3c9ea62f988d";
  }

  static const char* value(const ::pedsim_srvs::SetAgentState&) { return value(); }
};

template<>
struct DataType< ::pedsim_srvs::SetAgentState > {
  static const char* value()
  {
    return "pedsim_srvs/SetAgentState";
  }

  static const char* value(const ::pedsim_srvs::SetAgentState&) { return value(); }
};


// service_traits::MD5Sum< ::pedsim_srvs::SetAgentStateRequest> should match
// service_traits::MD5Sum< ::pedsim_srvs::SetAgentState >
template<>
struct MD5Sum< ::pedsim_srvs::SetAgentStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pedsim_srvs::SetAgentState >::value();
  }
  static const char* value(const ::pedsim_srvs::SetAgentStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pedsim_srvs::SetAgentStateRequest> should match
// service_traits::DataType< ::pedsim_srvs::SetAgentState >
template<>
struct DataType< ::pedsim_srvs::SetAgentStateRequest>
{
  static const char* value()
  {
    return DataType< ::pedsim_srvs::SetAgentState >::value();
  }
  static const char* value(const ::pedsim_srvs::SetAgentStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pedsim_srvs::SetAgentStateResponse> should match
// service_traits::MD5Sum< ::pedsim_srvs::SetAgentState >
template<>
struct MD5Sum< ::pedsim_srvs::SetAgentStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pedsim_srvs::SetAgentState >::value();
  }
  static const char* value(const ::pedsim_srvs::SetAgentStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pedsim_srvs::SetAgentStateResponse> should match
// service_traits::DataType< ::pedsim_srvs::SetAgentState >
template<>
struct DataType< ::pedsim_srvs::SetAgentStateResponse>
{
  static const char* value()
  {
    return DataType< ::pedsim_srvs::SetAgentState >::value();
  }
  static const char* value(const ::pedsim_srvs::SetAgentStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PEDSIM_SRVS_MESSAGE_SETAGENTSTATE_H
