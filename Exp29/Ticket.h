
#ifndef BUS_H
#define BUS_H

#include <string>

/**
  * class Bus
  * 
  */

class Bus
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Bus ();

  /**
   * Empty Destructor
   */
  virtual ~Bus ();

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

  void Bus_no;
  void Bus_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Bus_no
   * @param new_var the new value of Bus_no
   */
  void setBus_no (void new_var)   {
      Bus_no = new_var;
  }

  /**
   * Get the value of Bus_no
   * @return the value of Bus_no
   */
  void getBus_no ()   {
    return Bus_no;
  }

  /**
   * Set the value of Bus_name
   * @param new_var the new value of Bus_name
   */
  void setBus_name (void new_var)   {
      Bus_name = new_var;
  }

  /**
   * Get the value of Bus_name
   * @return the value of Bus_name
   */
  void getBus_name ()   {
    return Bus_name;
  }
private:


  void initAttributes () ;

};

#endif // BUS_H


#ifndef TICKET_H
#define TICKET_H

#include <string>

/**
  * class Ticket
  * 
  */

class Ticket
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Ticket ();

  /**
   * Empty Destructor
   */
  virtual ~Ticket ();

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
  void New_Ticket ()
  {
  }


  /**
   */
  void delete_ticket ()
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

  void Ticket_no;
  void Status;
  void No_of_person;
  void Charge_type;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Ticket_no
   * @param new_var the new value of Ticket_no
   */
  void setTicket_no (void new_var)   {
      Ticket_no = new_var;
  }

  /**
   * Get the value of Ticket_no
   * @return the value of Ticket_no
   */
  void getTicket_no ()   {
    return Ticket_no;
  }

  /**
   * Set the value of Status
   * @param new_var the new value of Status
   */
  void setStatus (void new_var)   {
      Status = new_var;
  }

  /**
   * Get the value of Status
   * @return the value of Status
   */
  void getStatus ()   {
    return Status;
  }

  /**
   * Set the value of No_of_person
   * @param new_var the new value of No_of_person
   */
  void setNo_of_person (void new_var)   {
      No_of_person = new_var;
  }

  /**
   * Get the value of No_of_person
   * @return the value of No_of_person
   */
  void getNo_of_person ()   {
    return No_of_person;
  }

  /**
   * Set the value of Charge_type
   * @param new_var the new value of Charge_type
   */
  void setCharge_type (void new_var)   {
      Charge_type = new_var;
  }

  /**
   * Get the value of Charge_type
   * @return the value of Charge_type
   */
  void getCharge_type ()   {
    return Charge_type;
  }
private:


  void initAttributes () ;

};

#endif // TICKET_H
