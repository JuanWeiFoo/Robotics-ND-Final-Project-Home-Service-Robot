// Generated by gencpp from file add_markers/DriveToTargetRequest.msg
// DO NOT EDIT!


#ifndef ADD_MARKERS_MESSAGE_DRIVETOTARGETREQUEST_H
#define ADD_MARKERS_MESSAGE_DRIVETOTARGETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace add_markers
{
template <class ContainerAllocator>
struct DriveToTargetRequest_
{
  typedef DriveToTargetRequest_<ContainerAllocator> Type;

  DriveToTargetRequest_()
    : pose_x(0.0)
    , pose_y(0.0)
    , orie_z(0.0)  {
    }
  DriveToTargetRequest_(const ContainerAllocator& _alloc)
    : pose_x(0.0)
    , pose_y(0.0)
    , orie_z(0.0)  {
  (void)_alloc;
    }



   typedef double _pose_x_type;
  _pose_x_type pose_x;

   typedef double _pose_y_type;
  _pose_y_type pose_y;

   typedef double _orie_z_type;
  _orie_z_type orie_z;





  typedef boost::shared_ptr< ::add_markers::DriveToTargetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::add_markers::DriveToTargetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DriveToTargetRequest_

typedef ::add_markers::DriveToTargetRequest_<std::allocator<void> > DriveToTargetRequest;

typedef boost::shared_ptr< ::add_markers::DriveToTargetRequest > DriveToTargetRequestPtr;
typedef boost::shared_ptr< ::add_markers::DriveToTargetRequest const> DriveToTargetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::add_markers::DriveToTargetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace add_markers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/kinetic/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::add_markers::DriveToTargetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::add_markers::DriveToTargetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::add_markers::DriveToTargetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c4cd6483759e73c17d98ce787ca2816";
  }

  static const char* value(const ::add_markers::DriveToTargetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c4cd6483759e73cULL;
  static const uint64_t static_value2 = 0x17d98ce787ca2816ULL;
};

template<class ContainerAllocator>
struct DataType< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "add_markers/DriveToTargetRequest";
  }

  static const char* value(const ::add_markers::DriveToTargetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 pose_x\n\
float64 pose_y\n\
float64 orie_z\n\
";
  }

  static const char* value(const ::add_markers::DriveToTargetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose_x);
      stream.next(m.pose_y);
      stream.next(m.orie_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DriveToTargetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::add_markers::DriveToTargetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::add_markers::DriveToTargetRequest_<ContainerAllocator>& v)
  {
    s << indent << "pose_x: ";
    Printer<double>::stream(s, indent + "  ", v.pose_x);
    s << indent << "pose_y: ";
    Printer<double>::stream(s, indent + "  ", v.pose_y);
    s << indent << "orie_z: ";
    Printer<double>::stream(s, indent + "  ", v.orie_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADD_MARKERS_MESSAGE_DRIVETOTARGETREQUEST_H
