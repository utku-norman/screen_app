// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from screen_app:msg/Num.idl
// generated code does not contain a copyright notice
#include "screen_app/msg/detail/num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
screen_app__msg__Num__init(screen_app__msg__Num * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    screen_app__msg__Num__fini(msg);
    return false;
  }
  // num
  return true;
}

void
screen_app__msg__Num__fini(screen_app__msg__Num * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // num
}

screen_app__msg__Num *
screen_app__msg__Num__create()
{
  screen_app__msg__Num * msg = (screen_app__msg__Num *)malloc(sizeof(screen_app__msg__Num));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(screen_app__msg__Num));
  bool success = screen_app__msg__Num__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
screen_app__msg__Num__destroy(screen_app__msg__Num * msg)
{
  if (msg) {
    screen_app__msg__Num__fini(msg);
  }
  free(msg);
}


bool
screen_app__msg__Num__Sequence__init(screen_app__msg__Num__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  screen_app__msg__Num * data = NULL;
  if (size) {
    data = (screen_app__msg__Num *)calloc(size, sizeof(screen_app__msg__Num));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = screen_app__msg__Num__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        screen_app__msg__Num__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
screen_app__msg__Num__Sequence__fini(screen_app__msg__Num__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      screen_app__msg__Num__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

screen_app__msg__Num__Sequence *
screen_app__msg__Num__Sequence__create(size_t size)
{
  screen_app__msg__Num__Sequence * array = (screen_app__msg__Num__Sequence *)malloc(sizeof(screen_app__msg__Num__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = screen_app__msg__Num__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
screen_app__msg__Num__Sequence__destroy(screen_app__msg__Num__Sequence * array)
{
  if (array) {
    screen_app__msg__Num__Sequence__fini(array);
  }
  free(array);
}