/*****************************************************************************
 * WelcomePage.h: Wizard welcome page
 *****************************************************************************
 * Copyright (C) 2008-2009 the VLMC team
 *
 * Authors: Ludovic Fauvet <etix@l0cal.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QWizardPage>
#include "ProjectWizard.h"
#include "ui_WelcomePage.h"

class   QWizard;

class WelcomePage : public QWizardPage
{
    Q_OBJECT
    public:
        WelcomePage( QWidget* parent = 0 );
        ~WelcomePage() { }

        int nextId() const;

    protected:
        virtual void changeEvent( QEvent *e );
        virtual bool validatePage();

    private:
        Ui::WelcomePage m_ui;
};

#endif
