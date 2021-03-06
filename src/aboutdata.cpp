/***************************************************************************
 *   Copyright (C) 2003 by Sébastien Laoût                                 *
 *   slaout@linux62.org                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "aboutdata.h"
#include <config.h>

static const char description[] = I18N_NOOP(
                                      "<p><b>Taking care of your ideas.</b></p>"
                                      "<p>A note-taking application that makes it easy to record ideas as you think, and quickly find them later. "
                                      "Organizing your notes has never been so easy.</p>");

// Or how to make order of disorganized toughts.

AboutData::AboutData()
        : KAboutData("basket", "", ki18n("BasKet Note Pads"),
                     VERSION, ki18n(description), KAboutData::License_GPL_V2,
                     ki18n("Copyright © 2003–2007, Sébastien Laoût; Copyright © 2013–2016, Gleb Baryshev"),
                     KLocalizedString(),
                     "http://basket.kde.org/",
                     "https://bugs.launchpad.net/basket")
{
    //Pass basket.kde.org to constructor to be used as D-Bus domain name, but set the displayed address below
    setHomepage("https://launchpad.net/basket");

    addAuthor(ki18n("OmegaPhil"),
              ki18n("Paste as plaintext option"),
              "OmegaPhil@startmail.com");

    addAuthor(ki18n("Kelvie Wong"),
              ki18n("Maintainer"),
              "kelvie@ieee.org");

    addAuthor(ki18n("Sébastien Laoût"),
              ki18n("Original Author"),
              "slaout@linux62.org");

    addAuthor(ki18n("Petri Damstén"),
              ki18n("Basket encryption, Kontact integration, KnowIt importer"),
              "damu@iki.fi");

    addAuthor(ki18n("Alex Gontmakher"),
              ki18n("Baskets auto lock, save-status icon, HTML copy/paste, basket name tooltip, drop to basket name"),
              "gsasha@cs.technion.ac.il");

    addAuthor(ki18n("Marco Martin"),
              ki18n("Original icon"),
              "m4rt@libero.it");
}
