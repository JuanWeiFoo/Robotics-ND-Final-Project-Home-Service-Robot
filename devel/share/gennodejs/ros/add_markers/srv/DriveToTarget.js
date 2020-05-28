// Auto-generated. Do not edit!

// (in-package add_markers.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class DriveToTargetRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pose_x = null;
      this.pose_y = null;
      this.orie_z = null;
    }
    else {
      if (initObj.hasOwnProperty('pose_x')) {
        this.pose_x = initObj.pose_x
      }
      else {
        this.pose_x = 0.0;
      }
      if (initObj.hasOwnProperty('pose_y')) {
        this.pose_y = initObj.pose_y
      }
      else {
        this.pose_y = 0.0;
      }
      if (initObj.hasOwnProperty('orie_z')) {
        this.orie_z = initObj.orie_z
      }
      else {
        this.orie_z = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DriveToTargetRequest
    // Serialize message field [pose_x]
    bufferOffset = _serializer.float64(obj.pose_x, buffer, bufferOffset);
    // Serialize message field [pose_y]
    bufferOffset = _serializer.float64(obj.pose_y, buffer, bufferOffset);
    // Serialize message field [orie_z]
    bufferOffset = _serializer.float64(obj.orie_z, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DriveToTargetRequest
    let len;
    let data = new DriveToTargetRequest(null);
    // Deserialize message field [pose_x]
    data.pose_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [pose_y]
    data.pose_y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [orie_z]
    data.orie_z = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a service object
    return 'add_markers/DriveToTargetRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7c4cd6483759e73c17d98ce787ca2816';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 pose_x
    float64 pose_y
    float64 orie_z
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DriveToTargetRequest(null);
    if (msg.pose_x !== undefined) {
      resolved.pose_x = msg.pose_x;
    }
    else {
      resolved.pose_x = 0.0
    }

    if (msg.pose_y !== undefined) {
      resolved.pose_y = msg.pose_y;
    }
    else {
      resolved.pose_y = 0.0
    }

    if (msg.orie_z !== undefined) {
      resolved.orie_z = msg.orie_z;
    }
    else {
      resolved.orie_z = 0.0
    }

    return resolved;
    }
};

class DriveToTargetResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.msg_feedback = null;
    }
    else {
      if (initObj.hasOwnProperty('msg_feedback')) {
        this.msg_feedback = initObj.msg_feedback
      }
      else {
        this.msg_feedback = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DriveToTargetResponse
    // Serialize message field [msg_feedback]
    bufferOffset = _serializer.string(obj.msg_feedback, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DriveToTargetResponse
    let len;
    let data = new DriveToTargetResponse(null);
    // Deserialize message field [msg_feedback]
    data.msg_feedback = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.msg_feedback.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'add_markers/DriveToTargetResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2897a4bc4d7ca330e430870cfdee7314';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string msg_feedback
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DriveToTargetResponse(null);
    if (msg.msg_feedback !== undefined) {
      resolved.msg_feedback = msg.msg_feedback;
    }
    else {
      resolved.msg_feedback = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: DriveToTargetRequest,
  Response: DriveToTargetResponse,
  md5sum() { return '2c58a1286169ed92fe3e9a75fdccf899'; },
  datatype() { return 'add_markers/DriveToTarget'; }
};
