/**
 *  This file is part of Qt-Net-SNMP.
 *
 *  Copyright (c) 2014 Juan Jose Salazar Garcia jjslzgc@gmail.com
 *
 *  Qt-Net-SNMP is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Qt-Net-SNMP is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Qt-Net-SNMP.  If not, see <http://www.gnu.org/licenses/>.
 *
 **/

/**
* @file qsnmpmanager.cpp
* @brief Definitions for Atributes and Methods of QSNMPManager class
* @author Juan Jose Salazar Garcia, jjslzgc@gmail.com
*/

#include "qsnmpmanager.h"
#include <QDebug>

void QtNetSNMP::QSNMPManager::setPort(unsigned short port)
{
    _port = port;
}

unsigned short QtNetSNMP::QSNMPManager::port() const
{
    return _port;
}

void QtNetSNMP::QSNMPManager::setRetries(unsigned short retries)
{
    _retries = retries;
}

unsigned short QtNetSNMP::QSNMPManager::retries() const
{
    return _retries;
}

void QtNetSNMP::QSNMPManager::setTimeout(long timeout)
{
    _timeout = timeout;
}

long QtNetSNMP::QSNMPManager::timeout() const
{
    return _timeout;
}

QtNetSNMP::QSNMPManager *QtNetSNMP::QSNMPManager::instance()
{
    // Meyers implementation of Singleton pattern, thread-safe in C++11
    static QSNMPManager instance;

    return &instance;
}

QtNetSNMP::QSNMPManager::QSNMPManager(unsigned short port, unsigned short retries, long timeout) : _port(port), _retries(retries), _timeout(timeout)
{
    init_snmp(LIBRARY_NAME);

    qDebug() << "QtNetSNMP::QSNMPManager::QSNMPManager -> Net-SNMP library initialized";
}
