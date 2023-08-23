
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


#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class customer
  * 
  */

class customer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  customer ();

  /**
   * Empty Destructor
   */
  virtual ~customer ();

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

  int id;
  string name;
  int contact;
  string address;
  int payment;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of contact
   * @param new_var the new value of contact
   */
  void setContact (int new_var)   {
      contact = new_var;
  }

  /**
   * Get the value of contact
   * @return the value of contact
   */
  int getContact ()   {
    return contact;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (string new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  string getAddress ()   {
    return address;
  }

  /**
   * Set the value of payment
   * @param new_var the new value of payment
   */
  void setPayment (int new_var)   {
      payment = new_var;
  }

  /**
   * Get the value of payment
   * @return the value of payment
   */
  int getPayment ()   {
    return payment;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
