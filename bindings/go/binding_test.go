package tree_sitter_rocq_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_rocq "github.com/lamg/tree-sitter-rocq/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rocq.Language())
	if language == nil {
		t.Errorf("Error loading Rocq grammar")
	}
}
