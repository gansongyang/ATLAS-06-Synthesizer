/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SynthFrameworkAudioProcessorEditor::SynthFrameworkAudioProcessorEditor (SynthFrameworkAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p), oscGui(p), envGui(p), filterGui(p), resonanceGui(p), filterEnvelopeGui(p), lfoGui(p), lfoFilterEnvelopeGui(p), hpfGui(p), vcaGui(p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (800, 400);
    addAndMakeVisible(&oscGui);
    addAndMakeVisible(&envGui);
    addAndMakeVisible(&filterGui);
    addAndMakeVisible(&resonanceGui);
    addAndMakeVisible(&filterEnvelopeGui);
    addAndMakeVisible(&lfoGui);
    addAndMakeVisible(&lfoFilterEnvelopeGui);
    addAndMakeVisible(&hpfGui);
    addAndMakeVisible(&vcaGui);
    
    
}


SynthFrameworkAudioProcessorEditor::~SynthFrameworkAudioProcessorEditor()
{
}

//==============================================================================
void SynthFrameworkAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll(Colours::black);
}

void SynthFrameworkAudioProcessorEditor::resized()
{
    const int componentWidth = 200;
    const int componentHeight = 300;
    Rectangle<int> area = getLocalBounds();
    oscGui.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    envGui.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    filterGui.setBounds(area.removeFromLeft(50).removeFromTop(componentHeight));
    resonanceGui.setBounds(area.removeFromLeft(50).removeFromTop(componentHeight));
    filterEnvelopeGui.setBounds(area.removeFromLeft(50).removeFromTop(componentHeight));
    lfoGui.setBounds(area.removeFromLeft(100).removeFromTop(componentHeight));
    lfoFilterEnvelopeGui.setBounds(area.removeFromLeft(50).removeFromTop(componentHeight));
    hpfGui.setBounds(area.removeFromLeft(componentWidth).removeFromTop(componentHeight));
    vcaGui.setBounds(10, 150, 150, 150);

}

void SynthFrameworkAudioProcessorEditor::sliderValueChanged(Slider *slider)
{
 
    
}

