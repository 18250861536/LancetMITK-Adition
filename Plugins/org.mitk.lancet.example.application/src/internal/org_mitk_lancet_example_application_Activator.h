/*============================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center (DKFZ)
All rights reserved.

Use of this source code is governed by a 3-clause BSD license that can be
found in the LICENSE file.

============================================================================*/

#ifndef org_lancet_example_application_Activator_H
#define org_lancet_example_application_Activator_H

#include <ctkPluginActivator.h>

class org_mitk_lancet_example_application_Activator : public QObject, public ctkPluginActivator
{
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "org_mitk_lancet_example_application")
  Q_INTERFACES(ctkPluginActivator)

public:
  void start(ctkPluginContext *context) override;
  void stop(ctkPluginContext *context) override;

  static ctkPluginContext* GetPluginContext();
protected:
  static ctkPluginContext* staticPluginContext;
};

#endif // org_lancet_example_application_Activator_H
