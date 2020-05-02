# Prerequisite: US_TOP must be set.


# Useful to target for example the root of the current layer (ex: to locate the
# relevant, layer-local '_build' directory):
#
ifndef LAYER_TOP
	LAYER_TOP := $(US_TOP)
endif


# We define the path to the Traces layer:
#
# (it may be a symbolic link pointing to the actual Traces package to be used,
# which itself may be either a 'Ceylan-Traces' directory or a 'traces' one)
#
ifneq ($(wildcard $(US_TOP)/../traces),)

	TRACES_TOP = $(US_TOP)/../traces

else

	# Default:
	TRACES_TOP = $(US_TOP)/../Ceylan-Traces

endif
