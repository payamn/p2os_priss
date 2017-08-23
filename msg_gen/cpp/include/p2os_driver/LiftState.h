/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-diamondback-p2os-0.2.1/debian/ros-diamondback-p2os/opt/ros/diamondback/stacks/p2os/p2os_driver/msg/LiftState.msg */
#ifndef P2OS_DRIVER_MESSAGE_LIFTSTATE_H
#define P2OS_DRIVER_MESSAGE_LIFTSTATE_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace p2os_driver
{
template <class ContainerAllocator>
struct LiftState_ : public ros::Message
{
  typedef LiftState_<ContainerAllocator> Type;

  LiftState_()
  : state(0)
  , dir(0)
  , position(0.0)
  {
  }

  LiftState_(const ContainerAllocator& _alloc)
  : state(0)
  , dir(0)
  , position(0.0)
  {
  }

  typedef int32_t _state_type;
  int32_t state;

  typedef int32_t _dir_type;
  int32_t dir;

  typedef float _position_type;
  float position;


private:
  static const char* __s_getDataType_() { return "p2os_driver/LiftState"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "4dcc2e41838611193ef6b9f90c9be41f"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# direction -1 is downard, +1 is upward, 0 is stationary\n\
int32 state\n\
int32 dir\n\
float32 position\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, state);
    ros::serialization::serialize(stream, dir);
    ros::serialization::serialize(stream, position);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, state);
    ros::serialization::deserialize(stream, dir);
    ros::serialization::deserialize(stream, position);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(state);
    size += ros::serialization::serializationLength(dir);
    size += ros::serialization::serializationLength(position);
    return size;
  }

  typedef boost::shared_ptr< ::p2os_driver::LiftState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p2os_driver::LiftState_<ContainerAllocator>  const> ConstPtr;
}; // struct LiftState
typedef  ::p2os_driver::LiftState_<std::allocator<void> > LiftState;

typedef boost::shared_ptr< ::p2os_driver::LiftState> LiftStatePtr;
typedef boost::shared_ptr< ::p2os_driver::LiftState const> LiftStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::p2os_driver::LiftState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::p2os_driver::LiftState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace p2os_driver

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::p2os_driver::LiftState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "4dcc2e41838611193ef6b9f90c9be41f";
  }

  static const char* value(const  ::p2os_driver::LiftState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x4dcc2e4183861119ULL;
  static const uint64_t static_value2 = 0x3ef6b9f90c9be41fULL;
};

template<class ContainerAllocator>
struct DataType< ::p2os_driver::LiftState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "p2os_driver/LiftState";
  }

  static const char* value(const  ::p2os_driver::LiftState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::p2os_driver::LiftState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# direction -1 is downard, +1 is upward, 0 is stationary\n\
int32 state\n\
int32 dir\n\
float32 position\n\
\n\
";
  }

  static const char* value(const  ::p2os_driver::LiftState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::p2os_driver::LiftState_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::p2os_driver::LiftState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.state);
    stream.next(m.dir);
    stream.next(m.position);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LiftState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p2os_driver::LiftState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::p2os_driver::LiftState_<ContainerAllocator> & v) 
  {
    s << indent << "state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.state);
    s << indent << "dir: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dir);
    s << indent << "position: ";
    Printer<float>::stream(s, indent + "  ", v.position);
  }
};


} // namespace message_operations
} // namespace ros

#endif // P2OS_DRIVER_MESSAGE_LIFTSTATE_H

