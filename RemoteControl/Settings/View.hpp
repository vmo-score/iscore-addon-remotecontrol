#pragma once
#include <RemoteControl/Settings/Model.hpp>
#include <iscore/plugins/settingsdelegate/SettingsDelegateView.hpp>
class QCheckBox;
class QDoubleSpinBox;
namespace RemoteControl
{
namespace Settings
{

class View :
        public iscore::SettingsDelegateView
{
        Q_OBJECT
    public:
        View();
        void setEnabled(bool);

    signals:
        void enabledChanged(bool);

    private:
        QWidget* getWidget() override;
        QWidget* m_widg{};

        QCheckBox* m_enabled{};

};

}
}
