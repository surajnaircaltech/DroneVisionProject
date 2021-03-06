// Generated by gencpp from file slamdunk_msgs/QualityStamped.msg
// DO NOT EDIT!


#ifndef SLAMDUNK_MSGS_MESSAGE_QUALITYSTAMPED_H
#define SLAMDUNK_MSGS_MESSAGE_QUALITYSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <slamdunk_msgs/Quality.h>

namespace slamdunk_msgs
{
template <class ContainerAllocator>
struct QualityStamped_
{
  typedef QualityStamped_<ContainerAllocator> Type;

  QualityStamped_()
    : header()
    , quality()  {
    }
  QualityStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , quality(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::slamdunk_msgs::Quality_<ContainerAllocator>  _quality_type;
  _quality_type quality;




  typedef boost::shared_ptr< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> const> ConstPtr;

}; // struct QualityStamped_

typedef ::slamdunk_msgs::QualityStamped_<std::allocator<void> > QualityStamped;

typedef boost::shared_ptr< ::slamdunk_msgs::QualityStamped > QualityStampedPtr;
typedef boost::shared_ptr< ::slamdunk_msgs::QualityStamped const> QualityStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slamdunk_msgs::QualityStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace slamdunk_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'slamdunk_msgs': ['/home/me132/DroneVisionProject/DroneInterface/src/slamdunk_ros/slamdunk_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6e6186f383d46e394043a8f436f9ca8";
  }

  static const char* value(const ::slamdunk_msgs::QualityStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6e6186f383d46e3ULL;
  static const uint64_t static_value2 = 0x94043a8f436f9ca8ULL;
};

template<class ContainerAllocator>
struct DataType< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slamdunk_msgs/QualityStamped";
  }

  static const char* value(const ::slamdunk_msgs::QualityStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
Quality quality\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: slamdunk_msgs/Quality\n\
uint8 value\n\
uint8 UNKNOWN = 0\n\
uint8 GOOD = 1\n\
uint8 HAZARDOUS = 2\n\
uint8 BAD = 3\n\
uint8 LOST = 4\n\
";
  }

  static const char* value(const ::slamdunk_msgs::QualityStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.quality);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct QualityStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slamdunk_msgs::QualityStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slamdunk_msgs::QualityStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "quality: ";
    s << std::endl;
    Printer< ::slamdunk_msgs::Quality_<ContainerAllocator> >::stream(s, indent + "  ", v.quality);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAMDUNK_MSGS_MESSAGE_QUALITYSTAMPED_H
