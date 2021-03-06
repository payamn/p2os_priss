"""autogenerated by genmsg_py from GripState.msg. Do not edit."""
import roslib.message
import struct


class GripState(roslib.message.Message):
  _md5sum = "370eb3507be0ed1043be50a3da3a07c6"
  _type = "p2os_driver/GripState"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# direction -1 is inward, +1 is outward, 0 is stationary
uint32 state
int32 dir
bool inner_beam
bool outer_beam
bool left_contact
bool right_contact

"""
  __slots__ = ['state','dir','inner_beam','outer_beam','left_contact','right_contact']
  _slot_types = ['uint32','int32','bool','bool','bool','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       state,dir,inner_beam,outer_beam,left_contact,right_contact
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(GripState, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.state is None:
        self.state = 0
      if self.dir is None:
        self.dir = 0
      if self.inner_beam is None:
        self.inner_beam = False
      if self.outer_beam is None:
        self.outer_beam = False
      if self.left_contact is None:
        self.left_contact = False
      if self.right_contact is None:
        self.right_contact = False
    else:
      self.state = 0
      self.dir = 0
      self.inner_beam = False
      self.outer_beam = False
      self.left_contact = False
      self.right_contact = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      _x = self
      buff.write(_struct_Ii4B.pack(_x.state, _x.dir, _x.inner_beam, _x.outer_beam, _x.left_contact, _x.right_contact))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.state, _x.dir, _x.inner_beam, _x.outer_beam, _x.left_contact, _x.right_contact,) = _struct_Ii4B.unpack(str[start:end])
      self.inner_beam = bool(self.inner_beam)
      self.outer_beam = bool(self.outer_beam)
      self.left_contact = bool(self.left_contact)
      self.right_contact = bool(self.right_contact)
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      _x = self
      buff.write(_struct_Ii4B.pack(_x.state, _x.dir, _x.inner_beam, _x.outer_beam, _x.left_contact, _x.right_contact))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.state, _x.dir, _x.inner_beam, _x.outer_beam, _x.left_contact, _x.right_contact,) = _struct_Ii4B.unpack(str[start:end])
      self.inner_beam = bool(self.inner_beam)
      self.outer_beam = bool(self.outer_beam)
      self.left_contact = bool(self.left_contact)
      self.right_contact = bool(self.right_contact)
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_Ii4B = struct.Struct("<Ii4B")
