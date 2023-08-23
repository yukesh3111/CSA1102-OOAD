
#ifndef CAR_VEHICLE_BOOKING_SYSTEM_H
#define CAR_VEHICLE_BOOKING_SYSTEM_H

#include <string>

/**
  * class Car_vehicle_booking_system
  * 
  */

class Car_vehicle_booking_system
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Car_vehicle_booking_system ();

  /**
   * Empty Destructor
   */
  virtual ~Car_vehicle_booking_system ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void Customer;
  void Car_Bike;
  void Renting_Owner;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Customer
   * @param new_var the new value of Customer
   */
  void setCustomer (void new_var)   {
      Customer = new_var;
  }

  /**
   * Get the value of Customer
   * @return the value of Customer
   */
  void getCustomer ()   {
    return Customer;
  }

  /**
   * Set the value of Car_Bike
   * @param new_var the new value of Car_Bike
   */
  void setCar_Bike (void new_var)   {
      Car_Bike = new_var;
  }

  /**
   * Get the value of Car_Bike
   * @return the value of Car_Bike
   */
  void getCar_Bike ()   {
    return Car_Bike;
  }

  /**
   * Set the value of Renting_Owner
   * @param new_var the new value of Renting_Owner
   */
  void setRenting_Owner (void new_var)   {
      Renting_Owner = new_var;
  }

  /**
   * Get the value of Renting_Owner
   * @return the value of Renting_Owner
   */
  void getRenting_Owner ()   {
    return Renting_Owner;
  }
private:


  void initAttributes () ;

};

#endif // CAR_VEHICLE_BOOKING_SYSTEM_H


#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

/**
  * class payment
  * 
  */

class payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  payment ();

  /**
   * Empty Destructor
   */
  virtual ~payment ();

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
  void add ()
  {
  }


  /**
   */
  void update ()
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

  string payment_method;
  int amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of payment_method
   * @param new_var the new value of payment_method
   */
  void setPayment_method (string new_var)   {
      payment_method = new_var;
  }

  /**
   * Get the value of payment_method
   * @return the value of payment_method
   */
  string getPayment_method ()   {
    return payment_method;
  }

  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (int new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  int getAmount ()   {
    return amount;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
