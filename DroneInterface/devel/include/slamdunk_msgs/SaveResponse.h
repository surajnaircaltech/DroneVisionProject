// Generated by gencpp from file slamdunk_msgs/SaveResponse.msg
// DO NOT EDIT!


#ifndef SLAMDUNK_MSGS_MESSAGE_SAVERESPONSE_H
#define SLAMDUNK_MSGS_MESSAGE_SAVERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace slamdunk_msgs
{
template <class ContainerAllocator>
struct SaveResponse_
{
  typedef SaveResponse_<ContainerAllocator> Type;

  SaveResponse_()
    {
    }
  SaveResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SaveResponse_

typedef ::slamdunk_msgs::SaveResponse_<std::allocator<void> > SaveResponse;

typedef boost::shared_ptr< ::slamdunk_msgs::SaveResponse > SaveResponsePtr;
typedef boost::shared_ptr< ::slamdunk_msgs::SaveResponse const> SaveResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slamdunk_msgs::SaveResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace slamdunk_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'slamdunk_msgs': ['/home/me132/DroneVisionProject/DroneInterface/src/slamdunk_ros/slamdunk_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::slamdunk_msgs::SaveResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slamdunk_msgs/SaveResponse";
  }

  static const char* value(const ::slamdunk_msgs::SaveResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::slamdunk_msgs::SaveResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SaveResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slamdunk_msgs::SaveResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::slamdunk_msgs::SaveResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SLAMDUNK_MSGS_MESSAGE_SAVERESPONSE_H
