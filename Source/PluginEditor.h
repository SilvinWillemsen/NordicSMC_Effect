/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class NordicSMC_EffectAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                              public Slider::Listener
{
public:
    NordicSMC_EffectAudioProcessorEditor (NordicSMC_EffectAudioProcessor&);
    ~NordicSMC_EffectAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    // Pure virtual function of the Slider::Listener class that needs to be overridden
    void sliderValueChanged (Slider* slider) override;
    
private:
    
    // Adding parameter control [1]: Adding a slider
    Slider gainSlider;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NordicSMC_EffectAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NordicSMC_EffectAudioProcessorEditor)
};
