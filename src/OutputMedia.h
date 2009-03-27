/*****************************************************************************
 * OutputMedia.h: Class for outpouting a media from a VMEM
 *****************************************************************************
 * Copyright (C) 2008-2009 the VLMC team
 *
 * Authors: Hugo Beauzee-Luyssen <hugo@vlmc.org>
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

#ifndef OUTPUTMEDIA_H
#define OUTPUTMEDIA_H

#include "VLCMedia.h"
#include "VLCInstance.h"
#include "VLCMediaPlayer.h"

class       OutputMedia
{
public:
    struct              DataCtx
    {
        ~DataCtx();
        QMutex*         mutex;
        OutputMedia*    outputMedia;
    };
    OutputMedia();
    static uchar*           lock( OutputMedia::DataCtx* dataCtx );
    static void             unlock( OutputMedia::DataCtx* dataCtx );

    void                    setVmem( uchar* pixelBuffer );

private:
    LibVLCpp::Media*            m_vlcMedia;
    LibVLCpp::MediaPlayer*      m_vlcMediaPlayer;
    LibVLCpp::Instance*         m_instance;
    OutputMedia::DataCtx*       m_dataCtx;
    uchar*                      m_pixelBuffer;

};

#endif // OUTPUTMEDIA_H
