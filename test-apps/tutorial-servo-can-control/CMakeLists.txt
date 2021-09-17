add_library (TutorialServo STATIC)
target_sources (TutorialServo PRIVATE src/TutorialServo.cpp)
target_link_libraries (tutorial-servo-can-control PRIVATE
        TutorialServo
        mbed-os
        CANInterface
        CANBus
        CANMsg
        )
target_include_directories (TutorialServo PUBLIC include)