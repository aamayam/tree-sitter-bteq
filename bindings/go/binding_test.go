package tree_sitter_bteq_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_bteq "github.com/aamayam/tree-sitter-bteq/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bteq.Language())
	if language == nil {
		t.Errorf("Error loading Bteq grammar")
	}
}
