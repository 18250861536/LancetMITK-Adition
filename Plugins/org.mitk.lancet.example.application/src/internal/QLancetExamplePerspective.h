/*============================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center (DKFZ)
All rights reserved.

Use of this source code is governed by a 3-clause BSD license that can be
found in the LICENSE file.

============================================================================*/

#ifndef QLancetExamplePerspective_H_
#define QLancetExamplePerspective_H_

// Berry
#include <berryIPerspectiveFactory.h>

// Qt
#include <QObject>

class QLancetExamplePerspective : public QObject, public berry::IPerspectiveFactory
{
  Q_OBJECT
  Q_INTERFACES(berry::IPerspectiveFactory)

public:
  QLancetExamplePerspective();

  void CreateInitialLayout(berry::IPageLayout::Pointer layout) override;
};

#endif /* QLancetExamplePerspective_H_ */
