// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arduniobot_msgs:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice
#include "arduniobot_msgs/srv/detail/euler_to_quaternion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
arduniobot_msgs__srv__EulerToQuaternion_Request__init(arduniobot_msgs__srv__EulerToQuaternion_Request * msg)
{
  if (!msg) {
    return false;
  }
  // roll
  // pitch
  // yaw
  return true;
}

void
arduniobot_msgs__srv__EulerToQuaternion_Request__fini(arduniobot_msgs__srv__EulerToQuaternion_Request * msg)
{
  if (!msg) {
    return;
  }
  // roll
  // pitch
  // yaw
}

bool
arduniobot_msgs__srv__EulerToQuaternion_Request__are_equal(const arduniobot_msgs__srv__EulerToQuaternion_Request * lhs, const arduniobot_msgs__srv__EulerToQuaternion_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__srv__EulerToQuaternion_Request__copy(
  const arduniobot_msgs__srv__EulerToQuaternion_Request * input,
  arduniobot_msgs__srv__EulerToQuaternion_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  return true;
}

arduniobot_msgs__srv__EulerToQuaternion_Request *
arduniobot_msgs__srv__EulerToQuaternion_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__srv__EulerToQuaternion_Request * msg = (arduniobot_msgs__srv__EulerToQuaternion_Request *)allocator.allocate(sizeof(arduniobot_msgs__srv__EulerToQuaternion_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__srv__EulerToQuaternion_Request));
  bool success = arduniobot_msgs__srv__EulerToQuaternion_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__srv__EulerToQuaternion_Request__destroy(arduniobot_msgs__srv__EulerToQuaternion_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__srv__EulerToQuaternion_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence__init(arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__srv__EulerToQuaternion_Request * data = NULL;

  if (size) {
    data = (arduniobot_msgs__srv__EulerToQuaternion_Request *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__srv__EulerToQuaternion_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__srv__EulerToQuaternion_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__srv__EulerToQuaternion_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence__fini(arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__srv__EulerToQuaternion_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence *
arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence * array = (arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence__destroy(arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence__are_equal(const arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence * lhs, const arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__srv__EulerToQuaternion_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence__copy(
  const arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence * input,
  arduniobot_msgs__srv__EulerToQuaternion_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__srv__EulerToQuaternion_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__srv__EulerToQuaternion_Request * data =
      (arduniobot_msgs__srv__EulerToQuaternion_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__srv__EulerToQuaternion_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__srv__EulerToQuaternion_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__srv__EulerToQuaternion_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
arduniobot_msgs__srv__EulerToQuaternion_Response__init(arduniobot_msgs__srv__EulerToQuaternion_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // w
  return true;
}

void
arduniobot_msgs__srv__EulerToQuaternion_Response__fini(arduniobot_msgs__srv__EulerToQuaternion_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // w
}

bool
arduniobot_msgs__srv__EulerToQuaternion_Response__are_equal(const arduniobot_msgs__srv__EulerToQuaternion_Response * lhs, const arduniobot_msgs__srv__EulerToQuaternion_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  return true;
}

bool
arduniobot_msgs__srv__EulerToQuaternion_Response__copy(
  const arduniobot_msgs__srv__EulerToQuaternion_Response * input,
  arduniobot_msgs__srv__EulerToQuaternion_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // w
  output->w = input->w;
  return true;
}

arduniobot_msgs__srv__EulerToQuaternion_Response *
arduniobot_msgs__srv__EulerToQuaternion_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__srv__EulerToQuaternion_Response * msg = (arduniobot_msgs__srv__EulerToQuaternion_Response *)allocator.allocate(sizeof(arduniobot_msgs__srv__EulerToQuaternion_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arduniobot_msgs__srv__EulerToQuaternion_Response));
  bool success = arduniobot_msgs__srv__EulerToQuaternion_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arduniobot_msgs__srv__EulerToQuaternion_Response__destroy(arduniobot_msgs__srv__EulerToQuaternion_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arduniobot_msgs__srv__EulerToQuaternion_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence__init(arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__srv__EulerToQuaternion_Response * data = NULL;

  if (size) {
    data = (arduniobot_msgs__srv__EulerToQuaternion_Response *)allocator.zero_allocate(size, sizeof(arduniobot_msgs__srv__EulerToQuaternion_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arduniobot_msgs__srv__EulerToQuaternion_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arduniobot_msgs__srv__EulerToQuaternion_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence__fini(arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arduniobot_msgs__srv__EulerToQuaternion_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence *
arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence * array = (arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence *)allocator.allocate(sizeof(arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence__destroy(arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence__are_equal(const arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence * lhs, const arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arduniobot_msgs__srv__EulerToQuaternion_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence__copy(
  const arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence * input,
  arduniobot_msgs__srv__EulerToQuaternion_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arduniobot_msgs__srv__EulerToQuaternion_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arduniobot_msgs__srv__EulerToQuaternion_Response * data =
      (arduniobot_msgs__srv__EulerToQuaternion_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arduniobot_msgs__srv__EulerToQuaternion_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arduniobot_msgs__srv__EulerToQuaternion_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arduniobot_msgs__srv__EulerToQuaternion_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
