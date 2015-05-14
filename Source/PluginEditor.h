/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class ProjectxAudioProcessorEditor  : public AudioProcessorEditor,
                                      private Slider::Listener
{
public:
    ProjectxAudioProcessorEditor (ProjectxAudioProcessor&);
    ~ProjectxAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    void sliderValueChanged (Slider* slider) override;
    
    Slider midiVolume;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    ProjectxAudioProcessor& processor;


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ProjectxAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED
