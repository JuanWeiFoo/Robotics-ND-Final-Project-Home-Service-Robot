;; Auto-generated. Do not edit!


(when (boundp 'add_markers::DriveToTarget)
  (if (not (find-package "ADD_MARKERS"))
    (make-package "ADD_MARKERS"))
  (shadow 'DriveToTarget (find-package "ADD_MARKERS")))
(unless (find-package "ADD_MARKERS::DRIVETOTARGET")
  (make-package "ADD_MARKERS::DRIVETOTARGET"))
(unless (find-package "ADD_MARKERS::DRIVETOTARGETREQUEST")
  (make-package "ADD_MARKERS::DRIVETOTARGETREQUEST"))
(unless (find-package "ADD_MARKERS::DRIVETOTARGETRESPONSE")
  (make-package "ADD_MARKERS::DRIVETOTARGETRESPONSE"))

(in-package "ROS")





(defclass add_markers::DriveToTargetRequest
  :super ros::object
  :slots (_pose_x _pose_y _orie_z ))

(defmethod add_markers::DriveToTargetRequest
  (:init
   (&key
    ((:pose_x __pose_x) 0.0)
    ((:pose_y __pose_y) 0.0)
    ((:orie_z __orie_z) 0.0)
    )
   (send-super :init)
   (setq _pose_x (float __pose_x))
   (setq _pose_y (float __pose_y))
   (setq _orie_z (float __orie_z))
   self)
  (:pose_x
   (&optional __pose_x)
   (if __pose_x (setq _pose_x __pose_x)) _pose_x)
  (:pose_y
   (&optional __pose_y)
   (if __pose_y (setq _pose_y __pose_y)) _pose_y)
  (:orie_z
   (&optional __orie_z)
   (if __orie_z (setq _orie_z __orie_z)) _orie_z)
  (:serialization-length
   ()
   (+
    ;; float64 _pose_x
    8
    ;; float64 _pose_y
    8
    ;; float64 _orie_z
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _pose_x
       (sys::poke _pose_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _pose_y
       (sys::poke _pose_y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _orie_z
       (sys::poke _orie_z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _pose_x
     (setq _pose_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _pose_y
     (setq _pose_y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _orie_z
     (setq _orie_z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass add_markers::DriveToTargetResponse
  :super ros::object
  :slots (_msg_feedback ))

(defmethod add_markers::DriveToTargetResponse
  (:init
   (&key
    ((:msg_feedback __msg_feedback) "")
    )
   (send-super :init)
   (setq _msg_feedback (string __msg_feedback))
   self)
  (:msg_feedback
   (&optional __msg_feedback)
   (if __msg_feedback (setq _msg_feedback __msg_feedback)) _msg_feedback)
  (:serialization-length
   ()
   (+
    ;; string _msg_feedback
    4 (length _msg_feedback)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _msg_feedback
       (write-long (length _msg_feedback) s) (princ _msg_feedback s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _msg_feedback
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _msg_feedback (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass add_markers::DriveToTarget
  :super ros::object
  :slots ())

(setf (get add_markers::DriveToTarget :md5sum-) "2c58a1286169ed92fe3e9a75fdccf899")
(setf (get add_markers::DriveToTarget :datatype-) "add_markers/DriveToTarget")
(setf (get add_markers::DriveToTarget :request) add_markers::DriveToTargetRequest)
(setf (get add_markers::DriveToTarget :response) add_markers::DriveToTargetResponse)

(defmethod add_markers::DriveToTargetRequest
  (:response () (instance add_markers::DriveToTargetResponse :init)))

(setf (get add_markers::DriveToTargetRequest :md5sum-) "2c58a1286169ed92fe3e9a75fdccf899")
(setf (get add_markers::DriveToTargetRequest :datatype-) "add_markers/DriveToTargetRequest")
(setf (get add_markers::DriveToTargetRequest :definition-)
      "float64 pose_x
float64 pose_y
float64 orie_z
---
string msg_feedback

")

(setf (get add_markers::DriveToTargetResponse :md5sum-) "2c58a1286169ed92fe3e9a75fdccf899")
(setf (get add_markers::DriveToTargetResponse :datatype-) "add_markers/DriveToTargetResponse")
(setf (get add_markers::DriveToTargetResponse :definition-)
      "float64 pose_x
float64 pose_y
float64 orie_z
---
string msg_feedback

")



(provide :add_markers/DriveToTarget "2c58a1286169ed92fe3e9a75fdccf899")


