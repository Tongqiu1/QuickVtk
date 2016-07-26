#pragma once

#include "quickVtkImageReader2.hpp"

#include <vtkPNGReader.h>

namespace quick {

    namespace Vtk {

        class PNGReader : public ImageReader2 {
            Q_OBJECT
        private:
            static Qml::Register::Class<PNGReader> Register;
            vtkSmartPointer<vtkPNGReader> m_vtkPNGReader;
        public:
            auto getSuffix() -> QString override;
            PNGReader();
        };
    }
}