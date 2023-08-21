
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

/**
  * class address
  * 
  */

class address
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  address ();

  /**
   * Empty Destructor
   */
  virtual ~address ();

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

  void street;
  void City;
  void State;
  void Zip;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of street
   * @param new_var the new value of street
   */
  void setStreet (void new_var)   {
      street = new_var;
  }

  /**
   * Get the value of street
   * @return the value of street
   */
  void getStreet ()   {
    return street;
  }

  /**
   * Set the value of City
   * @param new_var the new value of City
   */
  void setCity (void new_var)   {
      City = new_var;
  }

  /**
   * Get the value of City
   * @return the value of City
   */
  void getCity ()   {
    return City;
  }

  /**
   * Set the value of State
   * @param new_var the new value of State
   */
  void setState (void new_var)   {
      State = new_var;
  }

  /**
   * Get the value of State
   * @return the value of State
   */
  void getState ()   {
    return State;
  }

  /**
   * Set the value of Zip
   * @param new_var the new value of Zip
   */
  void setZip (void new_var)   {
      Zip = new_var;
  }

  /**
   * Get the value of Zip
   * @return the value of Zip
   */
  void getZip ()   {
    return Zip;
  }
private:


  void initAttributes () ;

};

#endif // ADDRESS_H


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
  void payment ()
  {
  }


  /**
   */
  void deliver ()
  {
  }


  /**
   */
  void transport ()
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

  void order_product;
  void quality;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of order_product
   * @param new_var the new value of order_product
   */
  void setOrder_product (void new_var)   {
      order_product = new_var;
  }

  /**
   * Get the value of order_product
   * @return the value of order_product
   */
  void getOrder_product ()   {
    return order_product;
  }

  /**
   * Set the value of quality
   * @param new_var the new value of quality
   */
  void setQuality (void new_var)   {
      quality = new_var;
  }

  /**
   * Get the value of quality
   * @return the value of quality
   */
  void getQuality ()   {
    return quality;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
