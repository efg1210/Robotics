import edu.wpi.first.wpilibj.*;
import com.ctre.phoenix.motorcontrol.can.WPI_TalonSRX;

class Robot extends TimedRobot {

	WPI_TalonSRX motorFL;
	WPI_TalonSRX motorFR;
	WPI_TalonSRX motorBL;
	WPI_TalonSRX motorBR;
  WPI_TalonSRX motorIL;
  WPI_TalonSRX motorIR;  

	SpeedControllerGroup right;
	SpeedControllerGroup left;
	SpeedControllerGroup intake;
	
	DifferentialDrive drive;
	
	XboxController controllerDrive;
	XboxController controllerOperator;

	void robotInit(){
		motorFL = new WPI_TalonSRX(1);
    motorFR = new WPI_TalonSRX(2);
    motorBL = new WPI_TalonSRX(3);
    motorBR = new WPI_TalonSRX(4);

    motorIL = new WPI_TalonSRX(5);
    motorIR = new WPI_TalonSRX(6);

    controllerDrive = new XboxController(0);
    controllerOperator = new XboxController(1);

    left = new SpeedControllerGroup(motorFL, motorBL);
    right = new SpeedControllerGroup(motorFR, motorBR);
    intake = new SpeedControllerGroup(motorIL, motorIR);

    drive = new DifferentialDrive(left, right);
	}

  void teleopInit(){

  }
  
  void teleopPeriodic(){
    
    double yValue;
    double xValue;
    
    if(controllerDrive.getAButton()){
      yValue = controllerDrive.getY(GenericHID.Hand.kLeft);
      xValue = controllerDrive.getX(GenericHID.Hand.kleft);
    }else if(controllerDrive.getBumper(GenericHID.Hand.kLeft)){
      yValue = controllerDrive.getY(GenericHID.Hand.kLeft);
      xValue = controllerDrive.getX(GenericHID.Hand.kRight);
    }else if(controllerDrive.getBumper(GenericHID.Hand.kRight)){
      yValue = controllerDrive.getY(GenericHID.Hand.kRight);
      xValue = controllerDrive.getX(GenericHID.Hand.kLeft);
    }

    DriveTrain.arcadeDrive(yValue,xValue);
    
    if(controllerOperator.getAButton()){
      intake.set(-1);
    }else if(controllerOperator.getBButton()){
      intake.set(1);
    }else{
      intake.set(0);
    }

  }

}
