
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


#ifndef PURCHASE_ORDER_H
#define PURCHASE_ORDER_H

#include <string>

/**
  * class Purchase_Order
  * 
  */

class Purchase_Order
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Purchase_Order ();

  /**
   * Empty Destructor
   */
  virtual ~Purchase_Order ();

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
  void getPONo ()
  {
  }


  /**
   */
  void sumline_items ()
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

  void PONo;
  void Orderdate;
  void Ship_date;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of PONo
   * @param new_var the new value of PONo
   */
  void setPONo (void new_var)   {
      PONo = new_var;
  }

  /**
   * Get the value of PONo
   * @return the value of PONo
   */
  void getPONo ()   {
    return PONo;
  }

  /**
   * Set the value of Orderdate
   * @param new_var the new value of Orderdate
   */
  void setOrderdate (void new_var)   {
      Orderdate = new_var;
  }

  /**
   * Get the value of Orderdate
   * @return the value of Orderdate
   */
  void getOrderdate ()   {
    return Orderdate;
  }

  /**
   * Set the value of Ship_date
   * @param new_var the new value of Ship_date
   */
  void setShip_date (void new_var)   {
      Ship_date = new_var;
  }

  /**
   * Get the value of Ship_date
   * @return the value of Ship_date
   */
  void getShip_date ()   {
    return Ship_date;
  }
private:


  void initAttributes () ;

};

#endif // PURCHASE_ORDER_H
