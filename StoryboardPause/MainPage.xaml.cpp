//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace StoryboardPause;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();

    VisualStateManager::GoToState(this, L"Normal", false);
}

void StoryboardPause::MainPage::Grid_PointerPressed(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
    static bool sPressed = false;
    sPressed = !sPressed;

    bool transitionState = e->GetCurrentPoint(this)->Properties->IsLeftButtonPressed;

    Platform::String^ isTransitionEnable = "TransitionEnabled: " + transitionState + "\n";
    OutputDebugStringW(isTransitionEnable->Data());

    VisualStateManager::GoToState(this, sPressed ? L"PointerOver" : L"Normal", transitionState);
}
