/////////////////////////////////////////////////////////////////////////////
// Name:        project2app.h
// Purpose:     
// Author:      GUI Designer
// Modified by: 
// Created:     08/07/2008 14:39:30
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _PROJECT2APP_H_
#define _PROJECT2APP_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
////@end control identifiers

/*!
 * Project2App class declaration
 */

class Project2App: public wxApp
{    
    DECLARE_CLASS( Project2App )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    Project2App();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin Project2App event handler declarations
////@end Project2App event handler declarations

////@begin Project2App member function declarations
////@end Project2App member function declarations

////@begin Project2App member variables
////@end Project2App member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(Project2App)
////@end declare app

#endif
    // _PROJECT2APP_H_
