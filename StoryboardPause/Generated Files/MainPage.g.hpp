﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::StoryboardPause::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::StoryboardPause::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                ::Windows::UI::Xaml::Controls::Grid^ element1 = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Grid^>(element1))->PointerPressed += ref new ::Windows::UI::Xaml::Input::PointerEventHandler(this, (void (::StoryboardPause::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::PointerRoutedEventArgs^))&MainPage::Grid_PointerPressed);
            }
            break;
        case 2:
            {
                this->CommonStates = safe_cast<::Windows::UI::Xaml::VisualStateGroup^>(__target);
            }
            break;
        case 3:
            {
                this->Normal = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
            }
            break;
        case 4:
            {
                this->PointerOver = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
            }
            break;
        case 5:
            {
                this->ButtonBrush = safe_cast<::Windows::UI::Xaml::Media::SolidColorBrush^>(__target);
            }
            break;
        case 6:
            {
                this->textBlock = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::StoryboardPause::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


