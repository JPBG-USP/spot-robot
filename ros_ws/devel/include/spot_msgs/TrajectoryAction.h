// Generated by gencpp from file spot_msgs/TrajectoryAction.msg
// DO NOT EDIT!


#ifndef SPOT_MSGS_MESSAGE_TRAJECTORYACTION_H
#define SPOT_MSGS_MESSAGE_TRAJECTORYACTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <spot_msgs/TrajectoryActionGoal.h>
#include <spot_msgs/TrajectoryActionResult.h>
#include <spot_msgs/TrajectoryActionFeedback.h>

namespace spot_msgs
{
template <class ContainerAllocator>
struct TrajectoryAction_
{
  typedef TrajectoryAction_<ContainerAllocator> Type;

  TrajectoryAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  TrajectoryAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::spot_msgs::TrajectoryActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::spot_msgs::TrajectoryActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::spot_msgs::TrajectoryAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spot_msgs::TrajectoryAction_<ContainerAllocator> const> ConstPtr;

}; // struct TrajectoryAction_

typedef ::spot_msgs::TrajectoryAction_<std::allocator<void> > TrajectoryAction;

typedef boost::shared_ptr< ::spot_msgs::TrajectoryAction > TrajectoryActionPtr;
typedef boost::shared_ptr< ::spot_msgs::TrajectoryAction const> TrajectoryActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spot_msgs::TrajectoryAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spot_msgs::TrajectoryAction_<ContainerAllocator1> & lhs, const ::spot_msgs::TrajectoryAction_<ContainerAllocator2> & rhs)
{
  return lhs.action_goal == rhs.action_goal &&
    lhs.action_result == rhs.action_result &&
    lhs.action_feedback == rhs.action_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spot_msgs::TrajectoryAction_<ContainerAllocator1> & lhs, const ::spot_msgs::TrajectoryAction_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spot_msgs::TrajectoryAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spot_msgs::TrajectoryAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spot_msgs::TrajectoryAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4807a3032ea2b8bf17d2892e1128a874";
  }

  static const char* value(const ::spot_msgs::TrajectoryAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4807a3032ea2b8bfULL;
  static const uint64_t static_value2 = 0x17d2892e1128a874ULL;
};

template<class ContainerAllocator>
struct DataType< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spot_msgs/TrajectoryAction";
  }

  static const char* value(const ::spot_msgs::TrajectoryAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"TrajectoryActionGoal action_goal\n"
"TrajectoryActionResult action_result\n"
"TrajectoryActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/TrajectoryActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"TrajectoryGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/TrajectoryGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"geometry_msgs/PoseStamped target_pose\n"
"# After this duration, the command will time out and the robot will stop. Must be non-zero\n"
"std_msgs/Duration duration\n"
"# If true, the feedback from the trajectory command must indicate that the robot is\n"
"# at the goal position. If set to false, the robot being near the goal is equivalent to\n"
"# it being at the goal. This is based on the feedback received from the boston dynamics\n"
"# API call at\n"
"# https://dev.bostondynamics.com/protos/bosdyn/api/proto_reference.html?highlight=status_near_goal#se2trajectorycommand-feedback-status\n"
"bool precise_positioning\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Duration\n"
"duration data\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/TrajectoryActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"TrajectoryResult result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/TrajectoryResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"bool success\n"
"string message\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/TrajectoryActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"TrajectoryFeedback feedback\n"
"\n"
"================================================================================\n"
"MSG: spot_msgs/TrajectoryFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"string feedback\n"
;
  }

  static const char* value(const ::spot_msgs::TrajectoryAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrajectoryAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spot_msgs::TrajectoryAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spot_msgs::TrajectoryAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::spot_msgs::TrajectoryActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::spot_msgs::TrajectoryActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::spot_msgs::TrajectoryActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPOT_MSGS_MESSAGE_TRAJECTORYACTION_H
