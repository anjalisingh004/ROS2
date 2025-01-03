// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arduniobot_msgs:action/ArduniobotTask.idl
// generated code does not contain a copyright notice

#ifndef ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__STRUCT_HPP_
#define ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Goal __attribute__((deprecated))
#else
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Goal __declspec(deprecated)
#endif

namespace arduniobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduniobotTask_Goal_
{
  using Type = ArduniobotTask_Goal_<ContainerAllocator>;

  explicit ArduniobotTask_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_number = 0l;
    }
  }

  explicit ArduniobotTask_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_number = 0l;
    }
  }

  // field types and members
  using _task_number_type =
    int32_t;
  _task_number_type task_number;

  // setters for named parameter idiom
  Type & set__task_number(
    const int32_t & _arg)
  {
    this->task_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Goal
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Goal
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduniobotTask_Goal_ & other) const
  {
    if (this->task_number != other.task_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduniobotTask_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduniobotTask_Goal_

// alias to use template instance with default allocator
using ArduniobotTask_Goal =
  arduniobot_msgs::action::ArduniobotTask_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduniobot_msgs


#ifndef _WIN32
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Result __attribute__((deprecated))
#else
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Result __declspec(deprecated)
#endif

namespace arduniobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduniobotTask_Result_
{
  using Type = ArduniobotTask_Result_<ContainerAllocator>;

  explicit ArduniobotTask_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ArduniobotTask_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Result
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Result
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduniobotTask_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduniobotTask_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduniobotTask_Result_

// alias to use template instance with default allocator
using ArduniobotTask_Result =
  arduniobot_msgs::action::ArduniobotTask_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduniobot_msgs


#ifndef _WIN32
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Feedback __declspec(deprecated)
#endif

namespace arduniobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduniobotTask_Feedback_
{
  using Type = ArduniobotTask_Feedback_<ContainerAllocator>;

  explicit ArduniobotTask_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0l;
    }
  }

  explicit ArduniobotTask_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percentage = 0l;
    }
  }

  // field types and members
  using _percentage_type =
    int32_t;
  _percentage_type percentage;

  // setters for named parameter idiom
  Type & set__percentage(
    const int32_t & _arg)
  {
    this->percentage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Feedback
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_Feedback
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduniobotTask_Feedback_ & other) const
  {
    if (this->percentage != other.percentage) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduniobotTask_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduniobotTask_Feedback_

// alias to use template instance with default allocator
using ArduniobotTask_Feedback =
  arduniobot_msgs::action::ArduniobotTask_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduniobot_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "arduniobot_msgs/action/detail/arduniobot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_SendGoal_Request __declspec(deprecated)
#endif

namespace arduniobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduniobotTask_SendGoal_Request_
{
  using Type = ArduniobotTask_SendGoal_Request_<ContainerAllocator>;

  explicit ArduniobotTask_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ArduniobotTask_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const arduniobot_msgs::action::ArduniobotTask_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_SendGoal_Request
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_SendGoal_Request
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduniobotTask_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduniobotTask_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduniobotTask_SendGoal_Request_

// alias to use template instance with default allocator
using ArduniobotTask_SendGoal_Request =
  arduniobot_msgs::action::ArduniobotTask_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduniobot_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_SendGoal_Response __declspec(deprecated)
#endif

namespace arduniobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduniobotTask_SendGoal_Response_
{
  using Type = ArduniobotTask_SendGoal_Response_<ContainerAllocator>;

  explicit ArduniobotTask_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ArduniobotTask_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_SendGoal_Response
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_SendGoal_Response
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduniobotTask_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduniobotTask_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduniobotTask_SendGoal_Response_

// alias to use template instance with default allocator
using ArduniobotTask_SendGoal_Response =
  arduniobot_msgs::action::ArduniobotTask_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduniobot_msgs

namespace arduniobot_msgs
{

namespace action
{

struct ArduniobotTask_SendGoal
{
  using Request = arduniobot_msgs::action::ArduniobotTask_SendGoal_Request;
  using Response = arduniobot_msgs::action::ArduniobotTask_SendGoal_Response;
};

}  // namespace action

}  // namespace arduniobot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_GetResult_Request __declspec(deprecated)
#endif

namespace arduniobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduniobotTask_GetResult_Request_
{
  using Type = ArduniobotTask_GetResult_Request_<ContainerAllocator>;

  explicit ArduniobotTask_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ArduniobotTask_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_GetResult_Request
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_GetResult_Request
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduniobotTask_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduniobotTask_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduniobotTask_GetResult_Request_

// alias to use template instance with default allocator
using ArduniobotTask_GetResult_Request =
  arduniobot_msgs::action::ArduniobotTask_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduniobot_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "arduniobot_msgs/action/detail/arduniobot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_GetResult_Response __declspec(deprecated)
#endif

namespace arduniobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduniobotTask_GetResult_Response_
{
  using Type = ArduniobotTask_GetResult_Response_<ContainerAllocator>;

  explicit ArduniobotTask_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ArduniobotTask_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const arduniobot_msgs::action::ArduniobotTask_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_GetResult_Response
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_GetResult_Response
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduniobotTask_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduniobotTask_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduniobotTask_GetResult_Response_

// alias to use template instance with default allocator
using ArduniobotTask_GetResult_Response =
  arduniobot_msgs::action::ArduniobotTask_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduniobot_msgs

namespace arduniobot_msgs
{

namespace action
{

struct ArduniobotTask_GetResult
{
  using Request = arduniobot_msgs::action::ArduniobotTask_GetResult_Request;
  using Response = arduniobot_msgs::action::ArduniobotTask_GetResult_Response;
};

}  // namespace action

}  // namespace arduniobot_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "arduniobot_msgs/action/detail/arduniobot_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__arduniobot_msgs__action__ArduniobotTask_FeedbackMessage __declspec(deprecated)
#endif

namespace arduniobot_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ArduniobotTask_FeedbackMessage_
{
  using Type = ArduniobotTask_FeedbackMessage_<ContainerAllocator>;

  explicit ArduniobotTask_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ArduniobotTask_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const arduniobot_msgs::action::ArduniobotTask_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_FeedbackMessage
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arduniobot_msgs__action__ArduniobotTask_FeedbackMessage
    std::shared_ptr<arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArduniobotTask_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArduniobotTask_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArduniobotTask_FeedbackMessage_

// alias to use template instance with default allocator
using ArduniobotTask_FeedbackMessage =
  arduniobot_msgs::action::ArduniobotTask_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace arduniobot_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace arduniobot_msgs
{

namespace action
{

struct ArduniobotTask
{
  /// The goal message defined in the action definition.
  using Goal = arduniobot_msgs::action::ArduniobotTask_Goal;
  /// The result message defined in the action definition.
  using Result = arduniobot_msgs::action::ArduniobotTask_Result;
  /// The feedback message defined in the action definition.
  using Feedback = arduniobot_msgs::action::ArduniobotTask_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = arduniobot_msgs::action::ArduniobotTask_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = arduniobot_msgs::action::ArduniobotTask_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = arduniobot_msgs::action::ArduniobotTask_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ArduniobotTask ArduniobotTask;

}  // namespace action

}  // namespace arduniobot_msgs

#endif  // ARDUNIOBOT_MSGS__ACTION__DETAIL__ARDUNIOBOT_TASK__STRUCT_HPP_
