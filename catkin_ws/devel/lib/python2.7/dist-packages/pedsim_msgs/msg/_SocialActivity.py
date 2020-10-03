# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pedsim_msgs/SocialActivity.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SocialActivity(genpy.Message):
  _md5sum = "064aac12909022edb4df5d568c180144"
  _type = "pedsim_msgs/SocialActivity"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """string      type        # see constants below
float32     confidence  # detection confidence

uint64[]      track_ids   # IDs of all person tracks involved in the activity, might be one or multiple


# Constants for social activity type (just examples at the moment)
string      TYPE_SHOPPING = shopping
string      TYPE_STANDING = standing
string      TYPE_INDIVIDUAL_MOVING = individual_moving
string      TYPE_WAITING_IN_QUEUE = waiting_in_queue
string      TYPE_LOOKING_AT_INFORMATION_SCREEN = looking_at_information_screen
string      TYPE_LOOKING_AT_KIOSK = looking_at_kiosk
string      TYPE_GROUP_ASSEMBLING = group_assembling
string      TYPE_GROUP_MOVING = group_moving
string      TYPE_FLOW_WITH_ROBOT = flow
string      TYPE_ANTIFLOW_AGAINST_ROBOT = antiflow
string      TYPE_WAITING_FOR_OTHERS = waiting_for_others

#string      TYPE_COMMUNICATING = communicating
#string      TYPE_TAKING_PHOTOGRAPH = taking_photograph
#string      TYPE_TALKING_ON_PHONE = talking_on_phone
"""
  # Pseudo-constants
  TYPE_SHOPPING = 'shopping'
  TYPE_STANDING = 'standing'
  TYPE_INDIVIDUAL_MOVING = 'individual_moving'
  TYPE_WAITING_IN_QUEUE = 'waiting_in_queue'
  TYPE_LOOKING_AT_INFORMATION_SCREEN = 'looking_at_information_screen'
  TYPE_LOOKING_AT_KIOSK = 'looking_at_kiosk'
  TYPE_GROUP_ASSEMBLING = 'group_assembling'
  TYPE_GROUP_MOVING = 'group_moving'
  TYPE_FLOW_WITH_ROBOT = 'flow'
  TYPE_ANTIFLOW_AGAINST_ROBOT = 'antiflow'
  TYPE_WAITING_FOR_OTHERS = 'waiting_for_others'

  __slots__ = ['type','confidence','track_ids']
  _slot_types = ['string','float32','uint64[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       type,confidence,track_ids

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SocialActivity, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.type is None:
        self.type = ''
      if self.confidence is None:
        self.confidence = 0.
      if self.track_ids is None:
        self.track_ids = []
    else:
      self.type = ''
      self.confidence = 0.
      self.track_ids = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.confidence
      buff.write(_get_struct_f().pack(_x))
      length = len(self.track_ids)
      buff.write(_struct_I.pack(length))
      pattern = '<%sQ'%length
      buff.write(struct.Struct(pattern).pack(*self.track_ids))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.type = str[start:end]
      start = end
      end += 4
      (self.confidence,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sQ'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.track_ids = s.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.type
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.confidence
      buff.write(_get_struct_f().pack(_x))
      length = len(self.track_ids)
      buff.write(_struct_I.pack(length))
      pattern = '<%sQ'%length
      buff.write(self.track_ids.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.type = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.type = str[start:end]
      start = end
      end += 4
      (self.confidence,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sQ'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.track_ids = numpy.frombuffer(str[start:end], dtype=numpy.uint64, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
