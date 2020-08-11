# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/VisionGeometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisionGeometry(type):
    """Metaclass of message 'VisionGeometry'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('message_info')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'message_info.msg.VisionGeometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vision_geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vision_geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vision_geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vision_geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vision_geometry

            from message_info.msg import FieldCircularArc
            if FieldCircularArc.__class__._TYPE_SUPPORT is None:
                FieldCircularArc.__class__.__import_type_support__()

            from message_info.msg import FieldLineSegment
            if FieldLineSegment.__class__._TYPE_SUPPORT is None:
                FieldLineSegment.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisionGeometry(metaclass=Metaclass_VisionGeometry):
    """Message class 'VisionGeometry'."""

    __slots__ = [
        '_field_length',
        '_field_width',
        '_goal_width',
        '_goal_depth',
        '_boundary_width',
        '_field_lines',
        '_field_arcs',
    ]

    _fields_and_field_types = {
        'field_length': 'double',
        'field_width': 'double',
        'goal_width': 'double',
        'goal_depth': 'double',
        'boundary_width': 'int32',
        'field_lines': 'sequence<message_info/FieldLineSegment>',
        'field_arcs': 'sequence<message_info/FieldCircularArc>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'FieldLineSegment')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'FieldCircularArc')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.field_length = kwargs.get('field_length', float())
        self.field_width = kwargs.get('field_width', float())
        self.goal_width = kwargs.get('goal_width', float())
        self.goal_depth = kwargs.get('goal_depth', float())
        self.boundary_width = kwargs.get('boundary_width', int())
        self.field_lines = kwargs.get('field_lines', [])
        self.field_arcs = kwargs.get('field_arcs', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.field_length != other.field_length:
            return False
        if self.field_width != other.field_width:
            return False
        if self.goal_width != other.goal_width:
            return False
        if self.goal_depth != other.goal_depth:
            return False
        if self.boundary_width != other.boundary_width:
            return False
        if self.field_lines != other.field_lines:
            return False
        if self.field_arcs != other.field_arcs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def field_length(self):
        """Message field 'field_length'."""
        return self._field_length

    @field_length.setter
    def field_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'field_length' field must be of type 'float'"
        self._field_length = value

    @property
    def field_width(self):
        """Message field 'field_width'."""
        return self._field_width

    @field_width.setter
    def field_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'field_width' field must be of type 'float'"
        self._field_width = value

    @property
    def goal_width(self):
        """Message field 'goal_width'."""
        return self._goal_width

    @goal_width.setter
    def goal_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_width' field must be of type 'float'"
        self._goal_width = value

    @property
    def goal_depth(self):
        """Message field 'goal_depth'."""
        return self._goal_depth

    @goal_depth.setter
    def goal_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_depth' field must be of type 'float'"
        self._goal_depth = value

    @property
    def boundary_width(self):
        """Message field 'boundary_width'."""
        return self._boundary_width

    @boundary_width.setter
    def boundary_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'boundary_width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'boundary_width' field must be an integer in [-2147483648, 2147483647]"
        self._boundary_width = value

    @property
    def field_lines(self):
        """Message field 'field_lines'."""
        return self._field_lines

    @field_lines.setter
    def field_lines(self, value):
        if __debug__:
            from message_info.msg import FieldLineSegment
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, FieldLineSegment) for v in value) and
                 True), \
                "The 'field_lines' field must be a set or sequence and each value of type 'FieldLineSegment'"
        self._field_lines = value

    @property
    def field_arcs(self):
        """Message field 'field_arcs'."""
        return self._field_arcs

    @field_arcs.setter
    def field_arcs(self, value):
        if __debug__:
            from message_info.msg import FieldCircularArc
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, FieldCircularArc) for v in value) and
                 True), \
                "The 'field_arcs' field must be a set or sequence and each value of type 'FieldCircularArc'"
        self._field_arcs = value
