TARGETS:=$(wildcard */)

.PHONY: all
all: $(TARGETS)

.PHONY: $(TARGETS)
$(TARGETS):
	$(MAKE) -C $@
