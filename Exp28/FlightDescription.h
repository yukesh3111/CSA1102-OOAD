
#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>

/**
  * class Aircraft
  * 
  */

class Aircraft
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Aircraft ();

  /**
   * Empty Destructor
   */
  virtual ~Aircraft ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void Get_Reg_NO ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  int RegistrationNumber;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of RegistrationNumber
   * @param new_var the new value of RegistrationNumber
   */
  void setRegistrationNumber (int new_var)   {
      RegistrationNumber = new_var;
  }

  /**
   * Get the value of RegistrationNumber
   * @return the value of RegistrationNumber
   */
  int getRegistrationNumber ()   {
    return RegistrationNumber;
  }
private:


  void initAttributes () ;

};

#endif // AIRCRAFT_H


#ifndef FLIGHTDESCRIPTION_H
#define FLIGHTDESCRIPTION_H

#include <string>

/**
  * class FlightDescription
  * 
  */

class FlightDescription
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  FlightDescription ();

  /**
   * Empty Destructor
   */
  virtual ~FlightDescription ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void depature_time ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  date ScheduledDepartTime;
  int ScheduledDuration;
  void frequency;
  Date StartEffectiveDate;
  Date StopEffectiveDate;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ScheduledDepartTime
   * @param new_var the new value of ScheduledDepartTime
   */
  void setScheduledDepartTime (date new_var)   {
      ScheduledDepartTime = new_var;
  }

  /**
   * Get the value of ScheduledDepartTime
   * @return the value of ScheduledDepartTime
   */
  date getScheduledDepartTime ()   {
    return ScheduledDepartTime;
  }

  /**
   * Set the value of ScheduledDuration
   * @param new_var the new value of ScheduledDuration
   */
  void setScheduledDuration (int new_var)   {
      ScheduledDuration = new_var;
  }

  /**
   * Get the value of ScheduledDuration
   * @return the value of ScheduledDuration
   */
  int getScheduledDuration ()   {
    return ScheduledDuration;
  }

  /**
   * Set the value of frequency
   * @param new_var the new value of frequency
   */
  void setFrequency (void new_var)   {
      frequency = new_var;
  }

  /**
   * Get the value of frequency
   * @return the value of frequency
   */
  void getFrequency ()   {
    return frequency;
  }

  /**
   * Set the value of StartEffectiveDate
   * @param new_var the new value of StartEffectiveDate
   */
  void setStartEffectiveDate (Date new_var)   {
      StartEffectiveDate = new_var;
  }

  /**
   * Get the value of StartEffectiveDate
   * @return the value of StartEffectiveDate
   */
  Date getStartEffectiveDate ()   {
    return StartEffectiveDate;
  }

  /**
   * Set the value of StopEffectiveDate
   * @param new_var the new value of StopEffectiveDate
   */
  void setStopEffectiveDate (Date new_var)   {
      StopEffectiveDate = new_var;
  }

  /**
   * Get the value of StopEffectiveDate
   * @return the value of StopEffectiveDate
   */
  Date getStopEffectiveDate ()   {
    return StopEffectiveDate;
  }
private:


  void initAttributes () ;

};

#endif // FLIGHTDESCRIPTION_H
