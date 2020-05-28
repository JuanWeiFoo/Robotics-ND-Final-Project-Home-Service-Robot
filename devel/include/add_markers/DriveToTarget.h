// Generated by gencpp from file add_markers/DriveToTarget.msg
// DO NOT EDIT!


#ifndef ADD_MARKERS_MESSAGE_DRIVETOTARGET_H
#define ADD_MARKERS_MESSAGE_DRIVETOTARGET_H

#include <ros/service_traits.h>


#include <add_markers/DriveToTargetRequest.h>
#include <add_markers/DriveToTargetResponse.h>


namespace add_markers
{

struct DriveToTarget
{

typedef DriveToTargetRequest Request;
typedef DriveToTargetResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DriveToTarget
} // namespace add_markers


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::add_markers::DriveToTarget > {
  static const char* value()
  {
    return "2c58a1286169ed92fe3e9a75fdccf899";
  }

  static const char* value(const ::add_markers::DriveToTarget&) { return value(); }
};

template<>
struct DataType< ::add_markers::DriveToTarget > {
  static const char* value()
  {
    return "add_markers/DriveToTarget";
  }

  static const char* value(const ::add_markers::DriveToTarget&) { return value(); }
};


// service_traits::MD5Sum< ::add_markers::DriveToTargetRequest> should match 
// service_traits::MD5Sum< ::add_markers::DriveToTarget > 
template<>
struct MD5Sum< ::add_markers::DriveToTargetRequest>
{
  static const char* value()
  {
    return MD5Sum< ::add_markers::DriveToTarget >::value();
  }
  static const char* value(const ::add_markers::DriveToTargetRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::add_markers::DriveToTargetRequest> should match 
// service_traits::DataType< ::add_markers::DriveToTarget > 
template<>
struct DataType< ::add_markers::DriveToTargetRequest>
{
  static const char* value()
  {
    return DataType< ::add_markers::DriveToTarget >::value();
  }
  static const char* value(const ::add_markers::DriveToTargetRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::add_markers::DriveToTargetResponse> should match 
// service_traits::MD5Sum< ::add_markers::DriveToTarget > 
template<>
struct MD5Sum< ::add_markers::DriveToTargetResponse>
{
  static const char* value()
  {
    return MD5Sum< ::add_markers::DriveToTarget >::value();
  }
  static const char* value(const ::add_markers::DriveToTargetResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::add_markers::DriveToTargetResponse> should match 
// service_traits::DataType< ::add_markers::DriveToTarget > 
template<>
struct DataType< ::add_markers::DriveToTargetResponse>
{
  static const char* value()
  {
    return DataType< ::add_markers::DriveToTarget >::value();
  }
  static const char* value(const ::add_markers::DriveToTargetResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ADD_MARKERS_MESSAGE_DRIVETOTARGET_H
