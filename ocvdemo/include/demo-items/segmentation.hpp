/** @file segmentation.hpp

    Copyright 2015 J.A. / http://www.tsdconseil.fr

    Project web page: http://www.tsdconseil.fr/log/opencv/demo/index-en.html

    This file is part of OCVDemo.

    OCVDemo is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OCVDemo is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with OCVDemo.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef SEGM_HPP
#define SEGM_HPP

#include "ocvdemo-item.hpp"


/** @brief Démonstration réparation d'image */
class DemoMahalanobis: public OCVDemoItem
{
public:
  DemoMahalanobis();
  int proceed(OCVDemoItemInput &input, OCVDemoItemOutput &output);
};


/** @brief Démonstration algorithme grabcut */
class GrabCutDemo: public OCVDemoItem
{
public:
  GrabCutDemo();
  int proceed(OCVDemoItemInput &input, OCVDemoItemOutput &output);
};

/** @brief Démonstration algorithme watershed */
class WShedDemo: public OCVDemoItem
{
public:
  WShedDemo();
  int proceed(OCVDemoItemInput &input, OCVDemoItemOutput &output);
};

/** @brief Démonstration réparation d'image */
class DemoSuperpixels: public OCVDemoItem
{
public:
  DemoSuperpixels();
  int proceed(OCVDemoItemInput &input, OCVDemoItemOutput &output);
};

#endif
